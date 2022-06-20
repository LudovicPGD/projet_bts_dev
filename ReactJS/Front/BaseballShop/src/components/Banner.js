import logo from '../assets/logo.png'

import './styles/Banner.css'

function Banner() {
    const title = 'BaseballShop'
    const soustitle = 'By Ligue sportive d’Auvergne'
    return (
            <div className='bannerlogo'>
                <img src={logo} alt='BaseballShop' className='lmj-logo' />
                <span className='titrelogo'>
                    <h1 className='lmj-title'>{title}</h1>
                    <h6>{soustitle}</h6>
                </span>
            </div>     
    )
}

export default Banner