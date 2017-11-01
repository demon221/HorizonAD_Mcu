/*<HOBOTHead>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, 2017 Horizon Robotics, Inc. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information 
 * $Domain____:AD$
 * $Namespace_:\example\XXX$
 * $Class_____:C$
 * $Name______:XXX$
 * $Variant___:AR40.4.0.0$
 * $Revision__:5$
 * $History___:
 * 
 * 10000.0.0; 1     14.10.2017 zhi.gao
 *   History example:
 *   Update: XXXX
 *   Review: XXXX
 *   Bugfix: XXXX
 * 
 * 10000.0.0; 0     10.10.2017 zhi.gao
 *   Initial created.
 * 
 * 
 * $
 **********************************************************************************************************************
 </HOBOTHead>*/

 #ifndef EXAMPLE_TYPES_H
 #define EXAMPLE_TYPES_H


/*
 ******************************************************************************
 * Type Definitions
 *****************************************************************************/
typedef enum
{
    EXAMPLE_FIRSTTYPE_ONE_E = 0,
    EXAMPLE_FIRSTTYPE_TWO_E,
    EXAMPLE_FIRSTTYPE_THREE_E
} Example_FirstType_t;

typedef enum
{
    EXAMPLE_SECONDTYPE_ONE_E = 0,
    EXAMPLE_SECONDTYPE_TWO_E,
    EXAMPLE_SECONDTYPE_THREE_E
} Example_SecondType_t;


typedef struct
{
    uint8  variable1;
    structType1 struct1;
} Example_StructType_tst;


 #endif