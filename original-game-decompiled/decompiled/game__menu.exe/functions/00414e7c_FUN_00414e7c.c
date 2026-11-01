
/* ==== FUN_00414e7c @ 00414e7c ==== 
 * signature: undefined __register FUN_00414e7c(int param_1, int * param_2, uint param_3)
 * body: 00414e7c-00414ec1
 */

void FUN_00414e7c(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  UINT local_c;
  
  local_c = 0;
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  if ((char)uVar1 != '\x12') {
    FUN_004132b4();
  }
  FUN_00413720(param_1,&local_c,4);
  FUN_0040443c(param_2,local_c);
  FUN_00413720(param_1,(undefined4 *)*param_2,local_c * 2);
  return;
}


