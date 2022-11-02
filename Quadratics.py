import math

# Get data
A = float(input("A:"))
B = float(input("B:"))
C = float(input("C:"))

# Calculate Root from data
if A == 0:
    error = "Math error"
else:
    # Calc Discrimant
    D = B*B - 4*A*C
    if D > 0:
        D2 = math.sqrt(D)
        Root1 =(-B + D2)/(2*A)
        Root2 =(-B - D2)/(2*A)
    elif D == 0:
        DoubleRoot = -B / (2 * A)
    else:
        D2 = math.sqrt(-D)
        RealPart = -B / (2 * A)
        ImaginaryPart = D2 / (2 * A)

# Print calculated root
if A == 0:
    print(error)
else:
    if D > 0:
        print("Root1: " +'{:.3f}'.format(Root1).rstrip("0")+"\n Root2: " +'{:.3f}'.format(Root2).rstrip("0"))    
    elif D == 0:
        print("The DoubleRoot is: " +'{:.3f}'.format(DoubleRoot).rstrip("0"))    
    else:
        print("Real part: " +'{:.3f}'.format(RealPart).rstrip("0")+"\n Imaginary part: " +'{:.3f}'.format(ImaginaryPart).rstrip("0"))    