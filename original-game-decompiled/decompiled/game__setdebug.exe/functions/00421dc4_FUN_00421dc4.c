
/* ==== FUN_00421dc4 @ 00421dc4 ==== 
 * signature: undefined __register FUN_00421dc4(int * param_1, undefined4 param_2)
 * body: 00421dc4-00421e1c
 */

void FUN_00421dc4(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_004026b8(8);
  *puVar2 = local_8;
  pHVar3 = FUN_00421d9c();
  puVar2[1] = pHVar3;
  cVar1 = FUN_00421d68(param_1,(int)pHVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_0040eec8(param_1,(int)puVar2);
  }
  else {
    FUN_0040f0a0(param_1,local_c,(int)puVar2);
  }
  return;
}


