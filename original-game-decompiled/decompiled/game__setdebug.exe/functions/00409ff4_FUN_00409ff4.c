
/* ==== FUN_00409ff4 @ 00409ff4 ==== 
 * signature: undefined __register FUN_00409ff4(int param_1)
 * body: 00409ff4-0040a040
 */

void FUN_00409ff4(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_00409ac4(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = FUN_00403c38(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_004079a0((undefined4 *)PTR_PTR_00446c10,&local_c,0);
  return;
}


