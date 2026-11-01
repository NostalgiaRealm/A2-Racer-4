
/* ==== FUN_0043a1e0 @ 0043a1e0 ==== 
 * signature: int __register FUN_0043a1e0(uint param_1)
 * body: 0043a1e0-0043a1fd
 */

int FUN_0043a1e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00417d54(param_1);
  if (iVar1 == 0x1fffffff) {
    return -1;
  }
  if (iVar1 == 0x20000000) {
    iVar1 = -0x1000000;
  }
  return iVar1;
}


