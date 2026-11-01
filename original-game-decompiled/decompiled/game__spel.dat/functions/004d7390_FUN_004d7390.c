
/* ==== FUN_004d7390 @ 004d7390 ==== 
 * signature: undefined __cdecl FUN_004d7390(void * param_1, int param_2)
 * body: 004d7390-004d73c9
 */

void __cdecl FUN_004d7390(void *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = param_2;
  param_2 = *(int *)(param_2 + 8);
  FUN_004d7640(param_1,&param_2,2);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0057629c;
  }
  FUN_004d7640(param_1,puVar2,*(int *)(iVar1 + 8));
  return;
}


