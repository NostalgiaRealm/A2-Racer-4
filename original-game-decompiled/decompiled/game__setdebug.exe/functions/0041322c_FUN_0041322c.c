
/* ==== FUN_0041322c @ 0041322c ==== 
 * signature: undefined __register FUN_0041322c(int param_1, int * param_2, uint param_3)
 * body: 0041322c-00413267
 */

void FUN_0041322c(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = param_3;
  FUN_00411b6c(param_1,&local_c,1);
  FUN_00403aa0(param_2,(undefined4 *)0x0,local_c & 0xff);
  puVar1 = (undefined4 *)FUN_00403e08(param_2);
  FUN_00411b6c(param_1,puVar1,local_c & 0xff);
  return;
}


