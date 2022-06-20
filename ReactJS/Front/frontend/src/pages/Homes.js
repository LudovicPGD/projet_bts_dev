import React from 'react';
import axios from "axios";
import { useEffect, useState } from "react";

function Homes() {
const [listOfPosts, setListOfPosts] = useState([]);

    useEffect(() => {
      axios.get('http://localhost:3001/objects').then((response) => {
        setListOfPosts(response.data);
      });
    }, []);

  return (
    <div>
        {listOfPosts.map((value, key) => { 
          return ( 
          <div className='object'>
            <div className='title'>{value.title}</div>
            <div className='cover'>{value.cover}</div>
            <div className='price'>{value.price}</div>
          </div>
        )})} 
    </div>
  )
}

export default Homes