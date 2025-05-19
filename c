<!DOCTYPE html>
<html>
<head>
  <style>
    #image {
      height: 300px;
      width: 400px;
      background-color: #eee;
      background-size: cover;
      background-position: center;
      text-align: center;
      line-height: 300px;
      font-size: 18px;
      color: #333;
    }
    .preview {
      height: 100px;
      margin: 10px;
      cursor: pointer;
    }
  </style>
</head>
<body>

<div id="image">Hover over an image below to display here.</div>

<img class="preview" src="https://via.placeholder.com/100x100?text=1" 
     alt="Image 1 description" 
     onmouseover="upDate(this)" 
     onmouseout="undo()">

<img class="preview" src="https://via.placeholder.com/100x100?text=2" 
     alt="Image 2 description" 
     onmouseover="upDate(this)" 
     onmouseout="undo()">

<img class="preview" src="https://via.placeholder.com/100x100?text=3" 
     alt="Image 3 description" 
     onmouseover="upDate(this)" 
     onmouseout="undo()">

<script src="script.js"></script>
</body>
</html>
