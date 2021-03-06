/*
 * Copyright (C) Intel 2015
 *
 * CRM has been designed by:
 *  - Cesar De Oliveira <cesar.de.oliveira@intel.com>
 *  - Erwan Bracq <erwan.bracq@intel.com>
 *  - Lionel Ulmer <lionel.ulmer@intel.com>
 *  - Marc Bellanger <marc.bellanger@intel.com>
 *
 * Original CRM contributors are:
 *  - Cesar De Oliveira <cesar.de.oliveira@intel.com>
 *  - Lionel Ulmer <lionel.ulmer@intel.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CRM_CONTROL_REQUEST_HEADER__
#define __CRM_CONTROL_REQUEST_HEADER__

#include "plugins/control.h"

/**
 * @see control.h
 */
void crm_ctrl_start(crm_ctrl_ctx_t *ctx);

/**
 * @see control.h
 */
void crm_ctrl_stop(crm_ctrl_ctx_t *ctx);

/**
 * @see control.h
 */
void crm_ctrl_restart(crm_ctrl_ctx_t *ctx, crm_ctrl_restart_type_t type,
                      const mdm_cli_dbg_info_t *dbg);

#endif /* __CRM_CONTROL_REQUEST_HEADER__ */
