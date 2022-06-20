CREATE TABLE projetjs.compte (
	id INT auto_increment NOT NULL,
	email varchar(100) NOT NULL,
	nom varchar(100) NOT NULL,
	prenom varchar(100) NOT NULL,
	telephone varchar(100) NOT NULL,
	password varchar(100) NOT NULL,
	privilege varchar(100) DEFAULT 0 NOT NULL,
	CONSTRAINT compte_pk PRIMARY KEY (id)
)
ENGINE=InnoDB
DEFAULT CHARSET=utf8mb3
COLLATE=utf8mb3_general_ci;
