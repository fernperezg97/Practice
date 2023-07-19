import React from 'react';
import { InputWithLabel } from './InputWithLabel.js';

function AddTodoForm({ onAddTodo }) {
    const [todoTitle, setTodoTitle] = React.useState(''); // setTodoTitle in this case is sometimes called the function updater/callback handler

    function handleTitleChange(event) {
        let newTodoTitle = event.target.value;
        setTodoTitle(newTodoTitle);
    };

    function handleAddTodo(event) {
        event.preventDefault();
        let todoItem = {
            title: todoTitle,
            id: Date.now(),
            }
        onAddTodo(todoItem);
        setTodoTitle(''); // Note to self: can also use event.target.reset() instead of document.getElementById()                 
    };
    
    return (
        <form id="formValue" onSubmit={handleAddTodo}>
            <InputWithLabel todoTitle={todoTitle} handleTitleChange={handleTitleChange}> 
                Title:  
            </InputWithLabel>
        </form>
    );
}

export { AddTodoForm }