
/* ==== FUN_00414e1c @ 00414e1c ==== 
 * signature: undefined __register FUN_00414e1c(int param_1, int * param_2, uint param_3)
 * body: 00414e1c-00414e79
 */

void FUN_00414e1c(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint local_c;
  
  local_c = 0;
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 == '\x06') {
    FUN_00413720(param_1,&local_c,1);
  }
  else if ((char)uVar1 == '\f') {
    FUN_00413720(param_1,&local_c,4);
  }
  else {
    FUN_004132b4();
  }
  FUN_00403d44(param_2,(undefined4 *)0x0,local_c);
  FUN_00413720(param_1,(undefined4 *)*param_2,local_c);
  return;
}


