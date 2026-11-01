
/* ==== FUN_004266c8 @ 004266c8 ==== 
 * signature: uint __register FUN_004266c8(int * param_1, uint param_2, undefined4 param_3)
 * body: 004266c8-00426706
 */

uint FUN_004266c8(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00402ef0(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_00426708((int)param_1);
  return param_2 | uVar2;
}


