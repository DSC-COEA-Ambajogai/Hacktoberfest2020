<?php

$server_name="127.0.0.1";
$user_name="root";
$password="";
$db="login";

$conn=mysqli_connect($server_name,$user_name,$password,$db);

if($conn->connect_error){
die('Connection Error!'.$conn->connect_error);
}

if(isset($_GET['submit'])){
  $uname=$_GET['uname'];
  $pwd=$_GET['passwor'];

              $pst="SELECT * FROM user WHERE Username='$uname' AND Password='$pwd'";
              $result=mysqli_query($conn,$pst);
               $count=mysqli_num_rows($result);
                 if($count==TRUE)
                {

              //   echo "Logged in!!";

                 header("location:ex01.php");
                }
              else{

                echo "Cheak Your User Name And Password!";

              }
    }


 ?>




<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <link rel="stylesheet" href="ligin.css">
    <meta charset="utf-8">
    <title>Log In Page</title>
      <style type="text/css">
      .error{  color:white;
          margin-top: 10px;
          margin-left: 80px;
          font-weight: bold;
      }

      </style>

  </head>
  <body>

  <div class="login">
    <img src="images/user.png" alt="userIcon" class="avatar">
   <h1>Login Here</h1>
   <form class="log" action="login.php" method="GET">

      <label for="uname">User Name</label>
      <input type="text" name="uname" id="uname" placeholder="Enter User Name">

      <label for="passwor">Password</label>
      <input type="password" name="passwor" id="passwor" placeholder="Enter Password">
       <a href="#">Fogot Your Password?</a>
      <input type="submit" name="submit" value="Submit" id="submit1">
      <div class="error">
        <?php echo $error ?>
      </div>
  <input type="submit" name="back" value="Back" id="submit2">



   </form>


  </div>







  </body>
</html>
