
/* ==== FUN_00430668 @ 00430668 ==== 
 * signature: uint __register FUN_00430668(int * param_1, uint param_2, undefined4 param_3)
 * body: 00430668-004306a6
 */

uint FUN_00430668(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_004306a8((int)param_1);
  return param_2 | uVar2;
}


