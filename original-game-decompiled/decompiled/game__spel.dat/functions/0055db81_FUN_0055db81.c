
/* ==== FUN_0055db81 @ 0055db81 ==== 
 * signature: undefined __thiscall FUN_0055db81(void * this, char * param_1)
 * body: 0055db81-0055dbda
 */

void __thiscall FUN_0055db81(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this_00;
  uint uVar3;
  undefined *puVar4;
  
  this_00 = (undefined *)(int)*param_1;
  uVar3 = FUN_00565739(this,(uint)this_00);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_005c8378 < 2) {
        uVar3 = (byte)PTR_DAT_005c8384[*param_1 * 2] & 4;
        this_00 = PTR_DAT_005c8384;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_0055c336(this_00,(int)*param_1,4);
        this_00 = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_005c837c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


