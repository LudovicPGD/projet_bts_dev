const mariadb = require("mariadb");

const PostsModel = mariadb.model(
  "projetjs",
  {
    name: {
      type: String,
      required: true
    },
    price: {
      type: Number,
      required: true
    },
    cover: {
      type: String,
      required: true
    }
  },
  "object"
);

module.exports = { PostsModel };