
/* ==== FUN_0055dfbc @ 0055dfbc ==== 
 * signature: SIZE_T __cdecl FUN_0055dfbc(LPCVOID param_1)
 * body: 0055dfbc-0055dfe4
 */

SIZE_T __cdecl FUN_0055dfbc(LPCVOID param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  
  uVar1 = FUN_0056205a((int)param_1);
  if (uVar1 != 0) {
    return *(int *)((int)param_1 + -4) - 9;
  }
  SVar2 = HeapSize(DAT_0075008c,0,param_1);
  return SVar2;
}


