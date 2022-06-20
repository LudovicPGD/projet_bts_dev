import '../styles/AccessoireItem.css'

function handleClick(accessoireName) {
	alert(`Vous voulez acheter 1 ${accessoireName}? Très bon choix 🌱✨`)
}

function AccessoireItem({ cover, name, price }) {
	return (
		<li className='lmj-plant-item' onClick={() => handleClick}>
			<span className='lmj-accessoire-item-price'>{price}€</span>
			<img className='lmj-plant-item-cover' src={cover} alt={`${name} cover`} />
			{name}
		</li>
	)
}

export default AccessoireItem