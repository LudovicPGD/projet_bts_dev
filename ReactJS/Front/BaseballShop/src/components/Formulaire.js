import { useState } from 'react'
import { Person } from 'react-bootstrap-icons';
import { X } from 'react-bootstrap-icons'
import '../styles/Formulaire.css'

function Inscription() {
    const [isOpen, setIsOpen] = useState(true)

    return isOpen ? (
        <div>
            <a className='inscription-buttons' href="#form-back">
                <Person fontSize='6vh'/>
            </a>
            <div id='form-back'>
                <div className='form-insciption'>
                    <a	className='inscription-croix' href="">
                    <X font-size='5vh' />
                    </a>
                    <div className='forminscrdiv'>
                        <form className='forminscr'> 
                            <input type='email' className='compte' placeholder='Email'></input>
                            <input type='password' className='compte' placeholder='Mot de passe'></input>
                            <div className='boutoninscrdiv'>
                                <input type='submit' className='boutoninscr' value='Connexion'></input>
                            </div>
                            <a className='qinscr' onClick={() => setIsOpen(false)}>Je veux m'inscrire !!!</a>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    ):(
        <div>
            <a className='inscription-buttons' href="#form-back">
            <Person fontSize='6vh'/>
            </a>
            <div id='form-back-co'>
                <div className='form-connexion'>
                    <a	className='connexion-croix' href='' onClick={() => setIsOpen(true)}>
                    <X font-size='5vh' />
                    </a>
                    <div className='formconndiv'>
                        <form className='formconn'> 
                            <input type='text' className='compte' placeholder='Nom'></input>
                            <input type='text' className='compte' placeholder='Prenom'></input>
                            <input type='email' className='compte' placeholder='Email'></input>
                            <input type='tel' pattern="[0-9]{2} [0-9]{2} [0-9]{2} [0-9]{2} [0-9]{2}" className='compte' placeholder='+33 ** ** ** ** **'></input>
                            <input type='password' className='compte' placeholder='Mot de passe'></input>
                            <div className='boutonconndiv'>
                                <input type='submit' className='boutoninscr' value='Inscription'></input>
                            </div>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    )
}

export default Inscription