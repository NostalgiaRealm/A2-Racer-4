
/* ==== __break @ 0051034f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0051034f-0051034f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


