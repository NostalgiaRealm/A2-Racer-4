
/* ==== FUN_004321d8 @ 004321d8 ==== 
 * signature: undefined __register FUN_004321d8(undefined2 param_1, int * param_2)
 * body: 004321d8-0043222b
 */

void FUN_004321d8(undefined2 param_1,int *param_2)

{
  UINT UVar1;
  CHAR local_106 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  FUN_004039b8(param_2);
  UVar1 = MapVirtualKeyA((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextA(UVar1 << 0x10,local_106,0x100);
    FUN_00403be8(param_2,local_106,0x100);
  }
  return;
}


