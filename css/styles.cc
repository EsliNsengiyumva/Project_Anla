 .left-side{
                    display:flex;
            }
            .nav-wrapper{
                display:flex;
                justify-content:space-between;
                padding:38px;

            }
            .nav-wrapper>.left-side>div{
                    margin-right: 20px;
                    font-size: 0.9em;
                    text-transform: uppercase;
            }

            .nav-link-wrapper{
                
                    height:22px;
                    border-bottom:1px solid transparent;
                    transition:border-bottom 0.5s;

            }

            .nav-link-wrapper a{
                color: #8a8a8a;
                text-decoration:none;
                transition:color 0.5s

            }
            .nav-link-wrapper:hover{
                    border-bottom: 1px solid black;
                    }

            .nav-link-wrapper a:hover{
                color:black;
            }
            body{
                margin:0px;

            }

            container{
                 display:grid;
                 grid-template-columns:1fr;
            }

            /* Porfolion */
            .portfolio-iterms-wrapper{

                display:grid;
                grid-template-columns:1fr 1fr 1fr;

            }
            .portfolio-img-background{

                height:350px;
                width:100%;
                background-size:cover;
                background-position:center;
                background-repeat:no-repeat;

            }
            .img-text-wrapper{
                position:absolute;
                top:0;
                display:flex;
                flex-direction:column;
                justify-content:center;
                align-items:center;
                height:100%;
                text-align:center;
                padding-left:100%;
                padding-right:100%;
            }
            /* to be more specific on the selector */
            .subtitle{
                font-weight:600px;
                color:ligthseagreen;
            }
