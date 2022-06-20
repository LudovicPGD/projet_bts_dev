import { accessoireList } from '../datas/accessoireList'
import AccessoireItem from './AccessoireItem'
import '../styles/ShoppingList.css'

function ShoppingList({ cart, updateCart }) {

    function addToCart(name, price) {
		const currentaccessoireAdded = cart.find((accessoire) => accessoire.name === name)
		if (currentaccessoireAdded) {
			const cartFilteredCurrentaccessoire = cart.filter(
				(accessoire) => accessoire.name !== name
			)
			updateCart([
				...cartFilteredCurrentaccessoire,
				{ name, price, amount: currentaccessoireAdded.amount + 1 }
			])
		} else {
			updateCart([...cart, { name, price, amount: 1 }])
		}
	}
        return (
            <div className='lmj-shopping-list'>
                <ul className='lmj-plant-list'>
				{accessoireList.map(({ id, cover, name, price }) =>
			(
						<div className='ajouter' key={id}>
							<AccessoireItem
								cover={cover}
								name={name}
								price={price}
							/>
							<button onClick={() => addToCart(name, price)}>Louer</button>
						</div>
					)
				)}
			</ul>
            </div>
        )
    }
    
    export default ShoppingList



































// function ShoppingList({ cart, updateCart }) {
// 	const [activeCategory, setActiveCategory] = useState('')

// 	function addToCart(name, price) {
// 		const currentAccessoireSaved = cart.find((accessoire) => accessoire.name === name)
// 		if (currentAccessoireSaved) {
// 			const cartFilteredCurrentAccessoire = cart.filter(
// 				(plant) => plant.name !== name
// 			)
// 			updateCart([
// 				...cartFilteredCurrentAccessoire,
// 				{ name, price, amount: currentAccessoireSaved.amount + 1 }
// 			])
// 		} else {
// 			updateCart([...cart, { name, price, amount: 1 }])
// 		}
// 	}

// 	return (
// 		<div className='lmj-shopping-list'>
// 			<ul className='lmj-plant-list'>
// 				{accessoireList.map(({ id, cover, name, price, category}) =>
// 					!activeCategory || activeCategory === category ? (
// 						<div key={id}>
// 							<AccessoireItem
// 								cover={cover}
// 								name={name}
// 								price={price}
// 							/>
// 							<button onClick={() => addToCart(name, price)}>Ajouter</button>
// 						</div>
// 					) : null
// 				)}
// 			</ul>
// 		</div>
// 	)
// }

// export default ShoppingList