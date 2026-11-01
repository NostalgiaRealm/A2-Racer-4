
/* ==== FUN_0044be30 @ 0044be30 ==== 
 * signature: bool __register FUN_0044be30(void)
 * body: 0044be30-0044be5d
 */

bool FUN_0044be30(void)

{
  BOOL BVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  BVar1 = SystemParametersInfoA(0x48,8,&local_8,0);
  if (BVar1 != 0) {
    return local_4 != 0;
  }
  return false;
}


