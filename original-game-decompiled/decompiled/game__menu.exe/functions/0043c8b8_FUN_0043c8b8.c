
/* ==== FUN_0043c8b8 @ 0043c8b8 ==== 
 * signature: undefined __register FUN_0043c8b8(undefined2 param_1, int * param_2)
 * body: 0043c8b8-0043c90b
 */

void FUN_0043c8b8(undefined2 param_1,int *param_2)

{
  UINT UVar1;
  CHAR local_106 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  FUN_00403c5c(param_2);
  UVar1 = MapVirtualKeyA((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextA(UVar1 << 0x10,local_106,0x100);
    FUN_00403e8c(param_2,local_106,0x100);
  }
  return;
}


