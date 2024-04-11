const mysql = require('mysql2');

const conn = "mysql:root:root@localhost:3306/university";

const connection = mysql.createPool(conn);

module.exports = connection;