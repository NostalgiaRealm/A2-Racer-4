
/* ==== FUN_0055367f @ 0055367f ==== 
 * signature: undefined __fastcall FUN_0055367f(void * param_1)
 * body: 0055367f-005536aa
 */

void __fastcall FUN_0055367f(void *param_1)

{
  char cVar1;
  
  if (((*(int *)((int)param_1 + 4) != 0) &&
      (cVar1 = *(char *)(*(int *)((int)param_1 + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
    FUN_005536ab(param_1,*(uint *)((int)param_1 + 8),'\0');
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)((int)param_1 + 4) + -1) = 0xff;
  }
  return;
}


