const express = require('express');
const app = express();
require('./data/dataBase');
const objectRoutes = require('./routes/objectController');

app.use('/', objectRoutes);

app.listen(5500, () => console.log('Server started: 5500'))