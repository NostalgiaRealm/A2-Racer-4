
/* ==== FUN_00404818 @ 00404818 ==== 
 * signature: bool __register FUN_00404818(undefined4 param_1, short * param_2, undefined4 param_3)
 * body: 00404818-0040482c
 */

bool FUN_00404818(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x101) {
    FUN_004047ac(param_1,(undefined4 *)param_2,param_3);
  }
  return sVar1 == 0x101;
}


