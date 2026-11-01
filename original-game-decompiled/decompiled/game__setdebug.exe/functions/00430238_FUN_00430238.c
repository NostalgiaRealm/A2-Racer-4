
/* ==== FUN_00430238 @ 00430238 ==== 
 * signature: undefined __register FUN_00430238(int * param_1, HIMAGELIST param_2)
 * body: 00430238-00430262
 */

void FUN_00430238(int *param_1,HIMAGELIST param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_004302c8(param_1);
  if (param_2 != (HIMAGELIST)0x0) {
    FUN_00430200((int)param_1,param_2);
    param_1[0xc] = (int)param_2;
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


