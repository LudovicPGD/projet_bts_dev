const express = require('express');
const dotenv = require('dotenv');
const bodyParser = require('body-parser');

dotenv.config({path: '.env-local'});

const PORT = process.env.PORT || '3001';

const app = express();

app.use(bodyParser.json());
app.use(express.json());
app.use(express.urlencoded({extended:false}));

app.get('/', (request, response) => {
    response.status(200).send("This is not why you're here. Head to /user/:id and replace :id with your user id")
})

const userRouter = require('./routes/user');
app.use('/user', userRouter);

app.listen(PORT, () => {
    console.log(`Listening for requests on port ${PORT}`)
})