
/* ==== FUN_0040a044 @ 0040a044 ==== 
 * signature: undefined __register FUN_0040a044(int param_1)
 * body: 0040a044-0040a090
 */

void FUN_0040a044(int param_1)

{
  char cVar1;
  int iVar2;
  double local_18;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_10 = 1;
  cVar1 = FUN_00409e00(param_1,&local_10,&local_18);
  if ((cVar1 != '\0') && (iVar2 = FUN_00403c38(param_1), iVar2 < local_10)) {
    return;
  }
  local_8 = 0xb;
  local_c = param_1;
  FUN_004079a0((undefined4 *)PTR_PTR_00446b24,&local_c,0);
  return;
}


