
/* ==== FUN_004707ec @ 004707ec ==== 
 * signature: undefined __register FUN_004707ec(int * param_1, undefined4 param_2, LPCSTR param_3)
 * body: 004707ec-0047083b
 */

void FUN_004707ec(int *param_1,undefined4 param_2,LPCSTR param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined2 local_14 [4];
  BSTR local_c;
  
  local_14[0] = 8;
  local_c = FUN_00404950(param_3);
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00470734(param_1,param_2,local_14);
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x47083b;
  SysFreeString(local_c);
  return;
}


