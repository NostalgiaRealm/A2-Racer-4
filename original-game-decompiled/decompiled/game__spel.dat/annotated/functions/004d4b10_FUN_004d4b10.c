
/* ==== FUN_004d4b10 @ 004d4b10 ==== 
 * signature: char * __thiscall FUN_004d4b10(void * this, char * param_1, char * param_2)
 * body: 004d4b10-004d4b44
 */

char * __thiscall FUN_004d4b10(void *this,char *param_1,char *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *extraout_ECX;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)((int)this + 8);
    do {
      uVar2 = FUN_0054eb50(this,(int)*param_1,puVar1);
      *param_1 = (char)uVar2;
      param_1 = param_1 + 1;
      this = extraout_ECX;
    } while (param_1 != param_2);
    return param_1;
  }
  return param_1;
}


