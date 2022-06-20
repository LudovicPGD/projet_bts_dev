import { useState, useEffect } from 'react'
import { Bag } from 'react-bootstrap-icons'
import { X } from 'react-bootstrap-icons'
import '../styles/Cart.css'

function Cart({ cart, updateCart}) {
	const [isOpen, setIsOpen] = useState(true)
	const total = cart.reduce(
		(acc, accessoireType) => acc + accessoireType.amount * accessoireType.price,
		0
	)
	useEffect(() => {
		document.title = `BaseballShop`
	},)

	return isOpen ? (
        <div className='lmj-cart-closed'>
        <button className='lmj-cart-toggle-buttons' onClick={() => setIsOpen(false)}>
            <Bag font-size='5vh' />
        </button>
    </div>
		
	) : (
        <div className='lmj-cart'>
			<button	className='lmj-cart-toggle-button' onClick={() => setIsOpen(true)}>
				<X font-size='5vh' />
			</button>
			{cart.length > 0 ? (
				<div>
					<h2>Panier</h2>
					<ul>
						{cart.map(({ name, price, amount }, index) => (
							<div key={`${name}-${index}`}>
								{name} {price}€ x {amount}
							</div>
						))}
					</ul>
					<h3>Total : {total}€</h3>
					<button className='boutonvider' onClick={() => updateCart([])}>Vider le panier</button>
				</div>
			) : (
				<div>Votre panier est vide</div>
			)}
		</div>
	)
}

export default Cart