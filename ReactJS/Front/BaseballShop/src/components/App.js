import { useState, useEffect } from 'react'
import Banner from './Banner'
import Formulaire from './Formulaire'
import Footer from './Footer'
import ShoppingList from './ShoppingList'
import Carte from './Cart'
import '../styles/App.css'


function App() {
	const savedCart = localStorage.getItem('cart')
	const [cart, updateCart] = useState(savedCart ? JSON.parse(savedCart) : [])

	useEffect(() => {
		localStorage.setItem('cart', JSON.stringify(cart))
	}, [cart])

    return (
        <div>
          <div>
            <div className='lmj-banner'>
              <Carte cart={cart} updateCart={updateCart} />
              <Banner />
              <div className='boutoninscription' onClick={() => './inscription.js'}>
                <Formulaire />
              </div>
            </div>
          </div>
          <div className='body'>
            <ShoppingList cart={cart} updateCart={updateCart} />
          </div>
          <Footer />
        </div>
    )
}

export default App