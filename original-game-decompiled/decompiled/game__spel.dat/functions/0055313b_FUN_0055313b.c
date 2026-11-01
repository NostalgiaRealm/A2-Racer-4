
/* ==== FUN_0055313b @ 0055313b ==== 
 * signature: char * __fastcall FUN_0055313b(void * param_1)
 * body: 0055313b-00553180
 */

char * __fastcall FUN_0055313b(void *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = FUN_0055c3ab();
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    FUN_00402940(param_1,(undefined4 *)pcVar1,sVar2);
    FUN_00559d4e(pcVar1);
  }
  if (*(int *)((int)param_1 + 8) == 0) {
    pcVar1 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday"
    ;
  }
  else {
    pcVar1 = *(char **)((int)param_1 + 4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
  }
  return pcVar1;
}


