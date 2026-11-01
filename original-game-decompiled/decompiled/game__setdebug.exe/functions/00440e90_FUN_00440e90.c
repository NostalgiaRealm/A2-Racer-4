
/* ==== FUN_00440e90 @ 00440e90 ==== 
 * signature: bool __register FUN_00440e90(void)
 * body: 00440e90-00440ebd
 */

bool FUN_00440e90(void)

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


