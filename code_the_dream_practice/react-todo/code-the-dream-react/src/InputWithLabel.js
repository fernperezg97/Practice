import React from 'react';
import { useEffect } from 'react';
import { useRef } from 'react';

function InputWithLabel(props) {
    const inputRef = useRef(null);
    useEffect(() => {
        inputRef.current.focus(); // Automatically focus the input when the component mounts
    });
    return (
        <>
            <label>{props.children} </label>
            <input id="todoTitle" type="text" name="title" value={props.todoTitle} onChange={props.handleTitleChange} ref={inputRef} ></input>
            <input type="submit" value="Add"/>
        </>
    )
}

export { InputWithLabel }