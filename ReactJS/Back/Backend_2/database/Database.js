const mariadb = require('mariadb');

const pool = mariadb.createPool({
    host: `localhost`,
    user: `root`,
    password: `ludo2002`,
    database: `projetjs`,
    connectionLimit: 5,
});

pool.getConnection((erreur, connection) => {
    if(erreur){
        if (erreur.code === 'PROTOCOL_CONNECTION_LOST'){
            console.error('Database connection perdu');
        }
        if (erreur.code === 'ER_CON_COUNT_ERROR'){
            console.error('Database trop de connection');
        }
        if (erreur.code === 'ECONNREFUSED'){
            console.error('Database connection est refuser');
        }
    }
    if(connection) connection.release();

    return;
});

module.exports = pool;