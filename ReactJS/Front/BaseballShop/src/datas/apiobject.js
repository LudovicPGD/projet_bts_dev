function apiobject() {
    const getUsers = () => {
      return fetch("http://localhost:3001/user", {
        type: "GET",
      }).then((res) => res.json());
    };
  
    return {
      getUsers,
    };
  }
  
  export default apiobject();