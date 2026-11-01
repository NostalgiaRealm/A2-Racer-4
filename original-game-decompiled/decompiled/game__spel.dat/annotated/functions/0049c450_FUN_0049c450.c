
/* ==== FUN_0049c450 @ 0049c450 ==== 
 * signature: undefined __thiscall FUN_0049c450(void * this, void * param_1)
 * body: 0049c450-0049c5a0
 */

void __thiscall FUN_0049c450(void *this,void *param_1)

{
  void *this_00;
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  this_00 = (void *)((int)this + 0x3c);
  FUN_004093c0(this_00,param_1,0,0xffffffff);
  uVar7 = 0;
  if (*(int *)((int)param_1 + 8) != 0) {
    do {
      uVar2 = *(uint *)((int)this + 0x44);
      if ((uVar2 < uVar7) || (*(int *)((int)this + 0x40) == 0)) {
        pcVar5 = "";
      }
      else {
        cVar1 = *(char *)(*(int *)((int)this + 0x40) + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          uVar4 = FUN_004095c0();
          if (uVar4 < uVar2) {
            FUN_0054b1b4();
          }
          iVar3 = *(int *)((int)this + 0x40);
          if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
            if (uVar2 == 0) {
              if (iVar3 != 0) {
                FUN_004029e0(this_00,0);
              }
            }
            else if (*(uint *)((int)this + 0x48) < uVar2) goto LAB_0049c4df;
          }
          else if (uVar2 == 0) {
            *(char *)(iVar3 + -1) = cVar1 + -1;
            FUN_004028f0(this_00,'\0');
          }
          else {
LAB_0049c4df:
            FUN_00402b20(uVar2);
          }
        }
        if (*(int *)((int)this + 0x40) != 0) {
          *(undefined1 *)(*(int *)((int)this + 0x40) + -1) = 0xff;
        }
        pcVar5 = (char *)(*(int *)((int)this + 0x40) + uVar7);
      }
      if (*pcVar5 == '@') {
        uVar2 = *(uint *)((int)this + 0x44);
        if ((uVar2 < uVar7) || (*(int *)((int)this + 0x40) == 0)) {
          puVar6 = &DAT_0057629c;
        }
        else {
          cVar1 = *(char *)(*(int *)((int)this + 0x40) + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            uVar4 = FUN_004095c0();
            if (uVar4 < uVar2) {
              FUN_0054b1b4();
            }
            iVar3 = *(int *)((int)this + 0x40);
            if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
              if (uVar2 == 0) {
                if (iVar3 != 0) {
                  FUN_004029e0(this_00,0);
                }
              }
              else if (*(uint *)((int)this + 0x48) < uVar2) goto LAB_0049c56b;
            }
            else if (uVar2 == 0) {
              *(char *)(iVar3 + -1) = cVar1 + -1;
              FUN_004028f0(this_00,'\0');
            }
            else {
LAB_0049c56b:
              FUN_00402b20(uVar2);
            }
          }
          if (*(int *)((int)this + 0x40) != 0) {
            *(undefined1 *)(*(int *)((int)this + 0x40) + -1) = 0xff;
          }
          puVar6 = (undefined1 *)(*(int *)((int)this + 0x40) + uVar7);
        }
        *puVar6 = 0x2c;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)param_1 + 8));
  }
  return;
}


