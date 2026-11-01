
/* ==== FUN_00414de0 @ 00414de0 ==== 
 * signature: undefined __register FUN_00414de0(int param_1, int * param_2, uint param_3)
 * body: 00414de0-00414e1b
 */

void FUN_00414de0(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = param_3;
  FUN_00413720(param_1,&local_c,1);
  FUN_00403d44(param_2,(undefined4 *)0x0,local_c & 0xff);
  puVar1 = (undefined4 *)FUN_004040ac(param_2);
  FUN_00413720(param_1,puVar1,local_c & 0xff);
  return;
}


