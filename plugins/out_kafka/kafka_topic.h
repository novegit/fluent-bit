/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2019-2020 The Fluent Bit Authors
 *  Copyright (C) 2015-2018 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_KAFKA_TOPIC_H
#define FLB_KAFKA_TOPIC_H

struct flb_kafka_topic *flb_kafka_topic_create(char *name,
                                               struct flb_kafka *ctx);
int flb_kafka_topic_destroy(struct flb_kafka_topic *topic,
                            struct flb_kafka *ctx);
int flb_kafka_topic_destroy_all(struct flb_kafka *ctx);
struct flb_kafka_topic *flb_kafka_topic_default(struct flb_kafka *ctx);

struct flb_kafka_topic *flb_kafka_topic_lookup(char *name,
                                               int name_len,
                                               struct flb_kafka *ctx);
struct flb_kafka_topic *flb_kafka_topic_lookup_null(char *name,
                                               int name_len,
                                               struct flb_kafka *ctx);

#endif
