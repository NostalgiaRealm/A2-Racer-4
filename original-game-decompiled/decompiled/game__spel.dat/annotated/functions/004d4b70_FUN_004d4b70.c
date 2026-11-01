
/* ==== FUN_004d4b70 @ 004d4b70 ==== 
 * signature: char * __thiscall FUN_004d4b70(void * this, char * param_1, char * param_2)
 * body: 004d4b70-004d4ba4
 */

char * __thiscall FUN_004d4b70(void *this,char *param_1,char *param_2)

{
  LCID *pLVar1;
  uint uVar2;
  void *extraout_ECX;
  
  if (param_1 != param_2) {
    pLVar1 = (LCID *)((int)this + 8);
    do {
      uVar2 = FUN_0054ec98(this,(int)*param_1,pLVar1);
      *param_1 = (char)uVar2;
      param_1 = param_1 + 1;
      this = extraout_ECX;
    } while (param_1 != param_2);
    return param_1;
  }
  return param_1;
}


