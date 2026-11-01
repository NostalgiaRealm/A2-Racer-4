
/* ==== FUN_0042bd04 @ 0042bd04 ==== 
 * signature: undefined __register FUN_0042bd04(int * param_1, undefined4 param_2)
 * body: 0042bd04-0042bd5c
 */

void FUN_0042bd04(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_0040277c(8);
  *puVar2 = local_8;
  pHVar3 = FUN_0042bcdc();
  puVar2[1] = pHVar3;
  cVar1 = FUN_0042bca8(param_1,(int)pHVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_00410104(param_1,(int)puVar2);
  }
  else {
    FUN_0041032c(param_1,local_c,(int)puVar2);
  }
  return;
}


