const express = require('express');
const router = express.Router();

const { objectModel } = require('../models/objectModels');

router.get('/', (req, res) => {
    objectModel.find((err, docs) => {
        console.log(docs)
    })
})

module.exports = router