
/* ==== FUN_0049be30 @ 0049be30 ==== 
 * signature: undefined __thiscall FUN_0049be30(void * this, void * param_1)
 * body: 0049be30-0049beeb
 */

void __thiscall FUN_0049be30(void *this,void *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  
  FUN_004093c0((void *)((int)this + 4),param_1,0,0xffffffff);
  if (*(int *)((int)param_1 + 4) == 0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)(*(int *)((int)param_1 + 8) + -1 + *(int *)((int)param_1 + 4));
  }
  if (*pcVar3 == '\\') {
    return;
  }
  if (-*(int *)((int)this + 0xc) - 1U < 2) {
    FUN_0054b1b4();
  }
  uVar4 = *(int *)((int)this + 0xc) + 1;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  puVar2 = *(undefined1 **)((int)this + 8);
  if (((puVar2 == (undefined1 *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      *puVar2 = 0;
      return;
    }
    if (uVar4 <= *(uint *)((int)this + 0x10)) goto LAB_0049bed2;
  }
  else if (uVar4 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_004028f0((void *)((int)this + 4),'\0');
    return;
  }
  FUN_00402b20(uVar4);
LAB_0049bed2:
  *(undefined1 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8)) = 0x5c;
  *(uint *)((int)this + 0xc) = uVar4;
  *(undefined1 *)(uVar4 + *(int *)((int)this + 8)) = 0;
  return;
}


