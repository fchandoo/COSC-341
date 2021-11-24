; Question 1: Decides whether a list has an atom inside 
(defun f1(L)
(cond((null L)nil) ; if L is empty then return false(nil)
((atom(car L))t) ; if the first element is an atom return t 
(T(f1(cdr L)))) ; else count the atoms in the cdr of L
)
;(print(f1 '((a b) (b c)))); returns NIL 
;(write(f1 '(a(b c))))

 ;-------------------------------------------------------------------------------------------------------------------
; Question 2: Counts the number of lists in a list 
(defun f2 (L) 
 (cond ((null L) 0) ;if L is empty then there are 0 atoms 
 ; if the first element of L is an atom then the atoms in the cdr and then add 1 to the rest of the list 
 ((listp (car L)) (+ 1 (f2 (cdr L))))                                                                                                              
 (T (f2 (cdr L))) ;else count the atoms in cdr of L
 )
)
;(print(f2 '(a (a b (b c)) c d (e))));returns 2  
 ;-------------------------------------------------------------------------------------------------------------------
;Question 3: Write the function that takes in the list of integers and returns the list containing only even integers. 
(defun f3(List)
  (cond((null List)nil); if the list is empty return nil 
  ((=(mod (car List) 2)0) (append (list(car List)) (f3 (cdr List))))
 ; appending to find the even integers using cdr      
                                      
    (T(f3 ( cdr List)))) ; else return the even integers 
)
;(print( f3 '(23 4 7 18 22))) 
 ;-------------------------------------------------------------------------------------------------------------------
;Question 4: Returns the maximum value of an integer list
(defun f4 (list)
    (cond ((null list) nil); if the list is empty return null 
            ((equal (length list) 1) (car list)) ; the length equals to 1 then last item is the first item of the list 
            ((> (car list) (cadr list)) (f4 (cons (car list) (cdr (cdr list)))))
            (T (f4 (cdr list)))); else find the last element of cdr in list 
  
)
;(print ( f4 '(6 9 2 7  10 5))) ; returns 10 ... The function works 

 ;-------------------------------------------------------------------------------------------------------------------
;Question 5: Writes the function and returns the reverse of the list 
(defun f5(L) 
  (cond((null L)L); if the list is empty then the function is empty
       ; reverse the cdr of L and append first element of L at the end 
       (T (append(f5 (cdr L)) (list (car L))))); 

)
;(print(f5 '(a( b c) (x) d))); returns(D (X) (B C) A) 
; the function works  

 ;-------------------------------------------------------------------------------------------------------------------

;Question 6: Write the function that returns the list containing every other element of a list 
(defun f6 (List)
(cond ((null List) nil); if list is empty tyhen it nil 
(T( cons(car List) (f6(cdr(cdr List)))))); car grabs the first element and then the cdr(cdr List) calls the function 
)
;(print( f6 '(c (a b) d ( x y) (a) b)))

 ;-------------------------------------------------------------------------------------------------------------------
;Questin 7: Write the list that returns the given location 
(defun f7(x L) 
  (cond((= L 1); if L starts at 1 
        (car x)) ; the first element is car 
   (T (f7( cdr x )(- L 1)))); else true than find the element in the list 

)
;(print (f7 '(c (a b) (d) c (x y)) 3 )); returns d becuase that is the third element which is d

 ;-------------------------------------------------------------------------------------------------------------------

; Question 8: Write the function and returns the sum of all integers everywhere in a list. 

(defun f8( List)
  (cond ((null List) 0)
  ;value is in this case a number and then  add it and the next value recursivly
  ((atom(car List)) (+ (car List)(f8(cdr List))))

  ;otherwise it's a list
  (T(+ (f8(car List)) (f8(cdr List))))
 )
)
;(print (f8 '(2 (5 4) 3 (2 (1 10)) 5)))
 ;-------------------------------------------------------------------------------------------------------------------
; Helper function used for the problems below 
(defun helper_list( x L)
  (cond ((null L)nil) ; if L is empty then x is not in L
        ((equal x(car L ))T); if  x is first element of L then x is in L 
        (T(helper_list x (cdr L)))); else checks the x is in the cdr L
)

;Question 9: Write the funtion that removes a duplicate list
(defun f9(list)
  (cond((null list)list) ; if the list empty returns nil 
       ((null (cdr list))list) 
       ((equal( helper_list(car list) (cdr list))T); helper list equals the then the first element and the last element
        (f9(cdr list))); find the last element of cdr of the list 
        (T ( cons (car list) (f9 (cdr list))))
)
)
; (write(f9 '())); printitng out an empty list and returns NIL 
;(print( f9 '(c (a b ) c d (a b)))); printing out the function canvas
 ;-------------------------------------------------------------------------------------------------------------------

;Question 10: Write the function 
  (defun f10 (x list)
    (cond   ((or (null x) (null list)) nil) 
        ((equal (helper_list (car x) list) T) (cons (car x) (f10 (cdr x) list))); the helper function equals of the last element is the first element of list
        (T (f10 (cdr x) list)); else check x in the cdr of list 
    )
)
        
;(print(f10 '(a (a b) c d) '(b (a b) d)))
