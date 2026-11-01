
/* ==== FUN_0045af28 @ 0045af28 ==== 
 * signature: uint __register FUN_0045af28(uint param_1, uint param_2)
 * body: 0045af28-0045af44
 */

uint FUN_0045af28(uint param_1,uint param_2)

{
  uint uVar1;
  
  while (param_2 != 0) {
    uVar1 = param_1 % param_2;
    param_1 = param_2;
    param_2 = uVar1;
  }
  return param_1;
}


