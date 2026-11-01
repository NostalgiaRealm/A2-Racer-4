
/* ==== FUN_004e76be @ 004e76be ==== 
 * signature: undefined __cdecl FUN_004e76be(undefined4 param_1, int * param_2)
 * body: 004e76be-004e76f9
 */

void __cdecl FUN_004e76be(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  int unaff_ESI;
  
  piVar1 = FUN_004d4cd0(param_2,&DAT_005b7690);
  pcVar2 = *(char **)(*(int *)(unaff_ESI + 0x10) + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004d4cd0(piVar1,pcVar2);
  FUN_004d4cd0(piVar1,&DAT_005b7690);
  return;
}


