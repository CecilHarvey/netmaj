/*  NETMAJ-XUI -- X User Interface --  Copyright Notice
 *
 *      Copyright (c) 1995,1996 Todo Software All rights reserved.
 *
 *   You can redistribute it and/or modify this software under the terms
 *  of the GNU General Public License version 2 as published by
 *  the Free Software Foundation.
 *
 *   This software is provided 'as-is', without any express or implied
 *  warranty.  In no event will the author be held liable for any damages
 *  arising from the use of this software.
 *
 *   Todo Software : NBC02365@niftyserve.or.jp
 */
/*  -*- Mode: C -*- 
 * This file is part of my project
 *
 * testpai.c -- 
 *
 * Author          : NBC02365@niftyserve.or.jp
 * Created On      : Thu May 11 10:27:04 1995
 * Last Modified By: NBC02365@niftyserve.or.jp
 * Last Modified On: Mon Jan  8 18:00:03 1996
 *
 *  Copyright (C) 1995,1996 Todo Software All rights reserved
 */
#include "xnet.h"
#include "pixread.h"
#include "xnetmaj.h"
#include "ruledef.h"

static widget_t rule;
static widget_t rules[20];

void
ruleview_init ()
{
  widget_t frames[7], canvas, framepoint;
  integer_t i, x, y;
  extern integer_t xwidth, xheight;
  extern widget_t root_widget;
  extern integer_t xwidth, xheight;
  extern integer_t red;

  rule = widget_create ("frame", root_widget);
  widget_configure (rule, resource_name, "rule");
  widget_set_geometry (rule, xwidth, xheight);

  framepoint = create_basic_info_frame ("frame",
                                        rule, frames, PAI_W * 18, 0, 1);
  widget_configure (frames[4], resource_frame_start, 270);
  widget_get_geometry (framepoint, &x, &y);
  widget_set_geometry (frames[0], xwidth, 5);

  if (PAICARD3D || BUILD4)
    {
      text_create (framepoint, xwidth, 54,
                   "    NETMAJ Localrule infomation", red, XLARGETIMESIB, 1);
    }
  for (i = 0; i < 20; i++)
    {
      rules[i] = canvas = widget_create ("text", framepoint);
      widget_set_geometry (canvas, xwidth, 18);
      widget_configure (canvas, resource_textfont, MEDIUMJP);
    }

  widget_pack (rule);
  widget_fix (rule);

  widget_set_geometry (rule, xwidth, xheight);
}

static int
uma_cmp (uma_t a, uma_t b)
{
  int i;
  for (i = 0; i < 12; i++)
    {
      if (a[i] != b[i])
        return 1;
    }
  return 0;
}

static void
rule_draw ()
{
  char *p;
  char buffer[128];
  int i = 0;
  if (!rule)
    ruleview_init ();

  sprintf (p =
           buffer, "%s��%d �������� 30000 ���֤�",
           tonpu ? "������" : "������", RL_STARTPOINT);
  widget_configure (rules[i++], resource_text, p);

  sprintf (p = buffer, "����: %s", (uma_cmp (uma, RLU_NONE) == 0) ? "�ʤ�"
           : (uma_cmp (uma, RLU_5_10) == 0) ? "���åȡ�"
           : (uma_cmp (uma, RLU_10_20) == 0) ? "���ġ�"
           : (uma_cmp (uma, RLU_10_30) == 0) ? "��󥹥꡼"
           : (uma_cmp (uma, RLU_7_5_3) == 0) ? "����������"
           : (uma_cmp (uma, RLU_UNDER) == 0) ? "���ߥ���" : "?");
  widget_configure (rules[i++], resource_text, p);


  if (RL_NOPINTUMO)
    {
      p = "�ԥ�ť�ʤ�: �Ĥ�ä��Ȥ��ϡ��ԥ�դ��Ĥ��ʤ�";
    }
  else
    {
      p = "�ԥ�ť⤢��: �Ĥ�ä��Ȥ����ԥ�դ��Ĥ�";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_NOAKADORA)
    {
      p = "�֥ɥ�ʤ�: �֥ɥ�ϡ��ɥ鰷���ˤ��ʤ�";
    }
  else
    {
      p = "�֥ɥ餢��: �֥ɥ�ϡ��ɥ鰷������";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_NONAKITAN)
    {
      p = "�ʤ�����ʤ�: �ʤ������ϥ���䥪���Ĥ��ʤ�";
    }
  else
    {
      p = "�ʤ����󤢤�: �ʤ������⥿��䥪���Ĥ�";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_NOKANURA)
    {
      p = "���󥦥�ʤ�: ����ɥ�ϣ���Τ�";
    }
  else
    {
      p = "���󥦥餢��: ���󥦥�⥦��ɥ�Ȥ���";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_NOFLY)
    {
      p = "�ȤӤʤ�: ���������ʤ�/Ȣ���׻��⤢��";
    }
  else
    {
      p = "�ȤӤ���: ��������⤢��";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_UNDER)
    {
      p = "Ȣ���׻�����: 0 ���ʲ���ʬ�� 0 �������ˤ����׻�����";
    }
  else
    {
      p = "Ȣ���׻��ʤ�: 0 ���ʲ���ʬ�� 0 �������˷׻�����";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_77MANGAN)
    {
      p = "�Ҥ� 7700/�Ƥ�11600 �ϡ����Ӱ���";
    }
  else
    {
      p = "�Ҥ� 7700/�Ƥ�11600 �ϡ����Ӱ����ˤ��ʤ�";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_NOKUIKAE)
    {
      p = "�����ؤ��ʤ�";
    }
  else
    {
      p = "�����ؤ�����";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RL_PAO)
    {
      p = "��ʥѥ��ˤ���: �绰������ʹ����ꤵ�������Ǥʧ�� ";
    }
  else
    {
      p = "��ʥѥ��ˤʤ�: ��Ǥʧ���ʤ� ";
    }
  widget_configure (rules[i++], resource_text, p);


  if (RL_ATAMAHANE && RL_NOSANCYAHO)
    {
      p = "Ƭ�ϥͤ��� �����¤ʤ�";
    }
  else if (RL_ATAMAHANE && !RL_NOSANCYAHO)
    {
      p = "Ƭ�ϥͤ��� �����¤���";
    }
  else if (!RL_ATAMAHANE && RL_NOSANCYAHO)
    {
      p = "�ȥ��󤢤� �����¤ʤ�";
    }
  else
    {
      p = "���֥�󤢤� �����¤���";
    }
  widget_configure (rules[i++], resource_text, p);

  sprintf (p = buffer, "������˵������  %d ��", RLC_YAKUMAN);
  widget_configure (rules[i++], resource_text, p);

  sprintf (p = buffer, "��ȯ��˵������ %d ��", RLC_IPPATU);
  widget_configure (rules[i++], resource_text, p);

  sprintf (p = buffer, "����ɥ��˵������ %d ��", RLC_URADORA);
  widget_configure (rules[i++], resource_text, p);

  sprintf (p = buffer, "�֥ɥ��˵������ %d ��", RLC_AKADORA);
  widget_configure (rules[i++], resource_text, p);

  if (RLC_NONAKIAKA)
    {
      p = "�֥ɥ�������Τ߸�˵�: �ʤ������ϸ�˵����Ĥ��ʤ�";
    }
  else
    {
      p = "�֥ɥ�Ͼ�˸�˵����Ĥ�";
    }
  widget_configure (rules[i++], resource_text, p);

  if (RLC_NOALLSTARS)
    {
      p = "�����륹�����ʤ�: �֥ɥ���罸�᤿�Ȥ��θ�˵�(2��)�ʤ�";
    }
  else
    {
      p = "�����륹��������: �֥ɥ���罸�᤿�Ȥ��θ�˵�(2��)����";
    }
  widget_configure (rules[i++], resource_text, p);

  widget_map (rule);

  widget_display (rule);
  widget_flush (rule);
  wait_key ();
}

void
rule_callback callbackarg_param
{
  extern widget_t board;
  extern widget_t about;

  if (board)
    widget_unmap (board);
  if (about)
    widget_unmap (about);

  rule_draw ();

  widget_unmap (rule);
  board_redraw (1);
}

void
rule_notify ()
{
  pixpai_mode (RL_NOAKADORA == 1 && RLC_AKADORA == 0);
}
